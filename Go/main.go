package main

import (
	"encoding/json"
	"fmt"
	"log"
	"math/rand"
	"net/http"
	"strconv"
	"time"

	"github.com/gorilla/mux"
)

//model

type Course struct {
	CourseId    string  `json:"id"`
	CourseName  string  `json:"name`
	CoursePrice int     `json:"price`
	Author      *Author `json:"author`
}

type Author struct {
	Fullname string `json:"name"`
	Website  string `json:"website"`
}

//fakeDb
var courses []Course

//middleware

func (course *Course) isEmpty() bool {
	return course.CourseName == ""
}

func main() {
	router := mux.NewRouter()
	//seeding
	courses = append(courses, Course{"1", "Reactjs", 299, &Author{"Jogesh Gupta", "portfolio"}})
	courses = append(courses, Course{"2", "Node", 299, &Author{"Jogi Gupta", "portfolio"}})

	//router
	router.HandleFunc("/", serveHome).Methods("GET")
	router.HandleFunc("/course", getAllCourses).Methods("GET")
	router.HandleFunc("/course", createCourse).Methods("POST")

	router.HandleFunc("/courses/{id}", getCourseById).Methods("GET")
	router.HandleFunc("/courses/{id}", updateCourse).Methods("PUT")
	router.HandleFunc("/courses/{id}", deleteCourse).Methods("DELETE")

	//listen
	log.Fatal(http.ListenAndServe(":3001", router))

}

//controllers

func serveHome(w http.ResponseWriter, r *http.Request) {
	w.Write([]byte("<h1>Welcome</h1>"))
}

func getAllCourses(w http.ResponseWriter, r *http.Request) {
	fmt.Println("Get All Courses")
	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(courses)
}

func getCourseById(w http.ResponseWriter, r *http.Request) {

	fmt.Println("Get one course")
	w.Header().Set("Content-Type", "application/json")

	//req.params
	params := mux.Vars(r)
	//looping courses and find id

	for _, val := range courses {
		if val.CourseId == params["id"] {
			json.NewEncoder(w).Encode(val)
			return
		}
	}
	json.NewEncoder(w).Encode("undefined id")
}

func createCourse(w http.ResponseWriter, r *http.Request) {
	w.Header().Set("Content-Type", "application/json ")
	var course Course

	if r.Body == nil {
		json.NewEncoder(w).Encode("Invalid data")
		return
	}
	_ = json.NewDecoder(r.Body).Decode(&course)
	if course.isEmpty() {
		json.NewEncoder(w).Encode("Invalid data")
		return
	}
	//gen a uid
	rand.Seed(time.Now().Unix())
	course.CourseId = strconv.Itoa(rand.Intn(100))
	courses = append(courses, course)
	json.NewEncoder(w).Encode(courses)
}

func updateCourse(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)

	for index, course := range courses {
		if course.CourseId == params["id"] {
			courses = append(courses[:index], courses[index+1:]...)
			var course Course
			_ = json.NewDecoder(r.Body).Decode(&course)
			course.CourseId = params["id"]
			courses = append(courses, course)
			json.NewEncoder(w).Encode(course)
		}
	}
	json.NewEncoder(w).Encode("Not found")
}

func deleteCourse(w http.ResponseWriter, r *http.Request) {

	params := mux.Vars(r)

	for index, course := range courses {
		if course.CourseId == params["id"] {
			courses = append(courses[:index], courses[index+1:]...)
		}
		json.NewEncoder(w).Encode("deleted course")
		return
	}
	json.NewEncoder(w).Encode("course not found")
}
