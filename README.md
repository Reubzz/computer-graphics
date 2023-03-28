# computer-graphics

A practice repository of all C++ files in which I learnt Computer Graphics during my SY BSc IT - Sem 4.

Some `graphics.h` inbuilt functions with its parameters:

### Arc

- Declaration:

  ```c++
  arc(int x, int y, int stangle, int endangle, int radius);
  ```

  - `x` = center point co-ordinate on x axis
  - `y` = center point co-ordinate on y axis
  - `stangle` = starging angle of the Arc (This is the angle where the arc will start from)
  - `endangle` = ending angle of the Arc (This is the angle where the arc will end at)
  - `radius` = radius of the arc (The distance from the x, y point to the arc)

- arc function can also be used to draw a circle but for that starting angle and end angle should be 0 and 360 respectively.
- eg: `arc(100, 100, 0, 135, 50);`
- output:

### Drawpoly

- Declaration:

  ```c++
  drawpoly( int num, int *polypoints );
  ```

  - `num` = num indicates (n+1) number of points where n is the number of vertices in a polygon.
    (if drawing triangle then 4 because 1st and 4th point will overlap)
  - `polypoints` = Array of points in [x, y, x, y] format. Each pair of integers gives x and y coordinates of a point on the polygon

### Circle

- Declaration:

  ```c++
  circle(int x, int y, int radius);
  ```

  - `x` = Mid-Point of circle on x axis
  - `y` = Mid-Point of circle on y axis
  - `radius` = radius of the circle

### Rectangle

- Declaration:

  ```c++
  rectangle(int leftTopX, int leftTopY, int bottomRightX, int bottomRightY);
  ```

  - Coordinates of left top and right bottom corner are required to draw the rectangle
  - `leftTopX` = specifies the X-coordinate of top left corner
  - `leftTopY` = specifies the y-coordinate of top left corner
  - `bottomRightX` = specifies the X-coordinate of right bottom corner
  - `bottomRightY` = specifies the y-coordinate of right bottom corner

### Ellipse

- Declaration:

  ```c++
  ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius);
  ```

  - `(x,y)` = are coordinates of center of the ellipse
  - `stangle` = is the starting angle
  - `endangle` = is the ending angle
  - `xradius` = specifies the X radius of the ellipse
  - `yradius` = specifies the Y radius of the ellipse

### Sector

- Declaration:

  ```c++
  sector( int x, int y, int stangle, int endangle, int xradius, int yradius)
  ```

  - `(x,y)` = are coordinates of center of the ellipse
  - `stangle` = is the starting angle
  - `endangle` = is the ending angle
  - `xradius` = specifies the X radius of the ellipse
  - `yradius` = specifies the Y radius of the ellipse

### Line

- Declaration:

  ```c++
  line(int x1, int y1, int x2, int y2);
  ```

  - x1 = starting point x co-ordinate
  - y1 = starting point y co-ordinate
  - x2 = ending point x co-ordinate
  - y2 = ending point y co-ordinate

### setfillstyle

- Declaration:

  ```c++
  setfillstyle( int pattern, int color );
  ```

  - `pattern` = SOLID_FILL, LINE_FILL, SLASH_FILL, HATCH_FILL, etc
  - `color` = RED, BLUE, GREEN, etc

### floodfill

- Declaration: floodfill function is used to fill an enclosed area

  ```c++
  floodfill(int x, int y, int border);
  ```

  - `(x, y)` = is any point on the screen if (x,y) lies inside the area then inside will be filled otherwise outside will be filled
  - `border` = specifies the color of boundary of area
    > To change fill pattern and fill color use [setfillstyle](#setfillstyle)

### putpixel

- Declaration:

  ```c++
  putpixel(int x, int y, int color);
  ```

  - `(x,y)` = are coordinates of a Pixel on the screen.
  - `color` = is the Color of the pixel. (RED, BLUE, GREEN, etc)
