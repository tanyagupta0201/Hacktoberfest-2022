'''
Author name: Jayanti Goswami
GitHub: Jayanti2919

Before running this code, replace the string stored by img with the file path of your required image (line 39)
'''
# importing module
import cv2
def convert(img):
    image = cv2.imread(img) 

    # changing image to greyscale
    grey_img = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # inverting image
    inv_img = 255 - grey_img

    # bluring image
    blur = cv2.GaussianBlur(inv_img, (21, 21), 0)

    # invting blured image
    inv_blur = 255 - blur

    # converting to sketch
    pencil_sketch = cv2.divide(grey_img, inv_blur, scale=256.0)

    # resizing image
    scale_percent = 60 # percent of original size
    width = int(pencil_sketch.shape[1] * scale_percent / 100)
    height = int(pencil_sketch.shape[0] * scale_percent / 100)
    dim = (width, height)
    resize = cv2.resize(pencil_sketch, dim, interpolation = cv2.INTER_AREA)

    # displaying image
    cv2.imshow("drawn image", resize)
    cv2.waitKey(0)

if __name__ == '__main__':
    img = "img_address"
    convert(img)
