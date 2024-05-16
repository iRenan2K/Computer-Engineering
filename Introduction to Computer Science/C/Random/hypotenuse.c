#include <stdio.h>
#include <math.h>

double promptCathetus(char cathetus) {
    double cathetusValue;

    printf("Enter cathetus '%c', in meters: ", cathetus);
    while (scanf(" %lf", &cathetusValue) != 1 || cathetusValue <= 0) {
        printf("ERROR: Invalid cathetus value. Please enter a numeric value greater than 0: ");
        while (getchar() != '\n');
    }

    return cathetusValue;
}

int main() {
    double a, b, c;

    printf("\nHello! Welcome to the hypotenuse's calculator!\n\n");

    a = promptCathetus('a');
    b = promptCathetus('b');

    c = sqrt(a*a + b*b);

    } 

    printf("\nHypotenuse is %lf meters\n", c);

    return 0;
}

/*

Add functionalities to calculate values for any triangles:

1. Basic trigonometry (sin, cos, tan)
2. Law of Sines and Cosines
3. Area calculation for arbitrary triangles
4. Angle calculation for arbitrary triangles
5. Inclusion of an option to choose the angle unit (degrees or radians)
6. Option to input angles in degrees or radians
7. Visualization of the triangle on a 2D Cartesian plane
8. Calculation of the perimeter of the triangle
9. Ability to solve for angles and sides based on user input
10. Support for different types of triangles (equilateral, isosceles, scalene)
11. Calculation of the centroid, incenter, circumcenter, and orthocenter of the triangle
12. Checking if the triangle is a right-angled triangle
13. Displaying the triangle type (acute, obtuse, right)
14. Calculating the area of the circumscribed and inscribed circles
15. Providing information about the Euler line of the triangle
16. Calculation of the inradius and circumradius of the triangle
17. Determining if the triangle is a Heronian triangle (integer sides and integer area)
18. Calculation of the semi-perimeter of the triangle
19. Displaying the extended Law of Sines and the extended Law of Cosines
20. Solving for special triangles (30-60-90, 45-45-90)
21. Calculating the length of the median and heights of the triangle
22. Determining if the triangle is an acute-angled triangle
23. Checking if the triangle is an equiangular triangle
24. Calculation of the angle bisectors and side bisectors
25. Verifying if the triangle is an isogonal triangle
26. Displaying the distance between the incenter and circumcenter
27. Calculating the distance between the centroid and orthocenter
28. Checking if the triangle is a Pythagorean triple
29. Identifying if the triangle is an equilateral right-angled triangle
30. Determining if the triangle is a golden triangle (angles in degrees relate to the golden ratio)
31. Calculation of the apothem and exradius of the triangle
32. Verifying if the triangle is an integer-sided triangle
33. Displaying information about the Fermat point of the triangle
34. Calculation of the angle between medians of the triangle
35. Determining if the triangle is a triangle with sides in an arithmetic progression
36. Checking if the triangle is a triangle with sides in a geometric progression
37. Calculation of the distance between the incenter and centroid
38. Identifying if the triangle is a tangential triangle



Comprehensive Geometric Calculator Features:

1. Calculate the length of the median and heights of the triangle.
2. Determine if the triangle is an acute-angled triangle.
3. Check if the triangle is an equiangular triangle.
4. Calculate the angle bisectors and side bisectors.
5. Verify if the triangle is an isogonal triangle.
6. Display the distance between the incenter and circumcenter.
7. Calculate the distance between the centroid and orthocenter.
8. Check if the triangle is a Pythagorean triple.
9. Identify if the triangle is an equilateral right-angled triangle.
10. Determine if the triangle is a golden triangle (angles in degrees related to the golden ratio).
11. Calculate the apothem and exradius of the triangle.
12. Verify if the triangle is an integer-sided triangle.
13. Display information about the Fermat point of the triangle.
14. Calculate the angle between medians of the triangle.
15. Determine if the triangle is a triangle with sides in an arithmetic progression.
16. Check if the triangle is a triangle with sides in a geometric progression.
17. Calculate the distance between the incenter and centroid.
18. Identify if the triangle is a tangential triangle.
19. Compute the area of the triangle using Heron's formula.
20. Find the coordinates of the orthocenter, centroid, and circumcenter.
21. Determine if the triangle is an obtuse-angled triangle.
22. Calculate the radius of the incircle and circumcircle.
23. Check if the triangle is a cyclic triangle.
24. Compute the length of the inradius and circumradius.
25. Identify if the triangle is an isosceles triangle.
26. Determine if the triangle is a scalene triangle.
27. Calculate the semiperimeter of the triangle.
28. Check if the triangle is a right-angled triangle.
29. Compute the circumcenter and incenter coordinates.
30. Identify if the triangle is an equilateral triangle.
31. Determine the type of triangle (acute, obtuse, or right-angled).
32. Calculate the distance between the circumcenter and centroid.
33. Display information about the Brocard points of the triangle.
34. Determine the type of triangle (acute, obtuse, or right-angled).
35. Calculate the distance between the orthocenter and centroid.
36. Identify if the triangle is a self-intersecting triangle.
37. Determine the type of triangle (acute, obtuse, or right-angled).
38. Calculate the distance between the incenter and circumcenter.
39. Check if the triangle is a stellated triangle.
40. Determine the type of triangle (acute, obtuse, or right-angled).
41. Calculate the distance between the incenter and circumcenter.
42. Check if the triangle is a stellated triangle.
43. Determine the type of triangle (acute, obtuse, or right-angled).
44. Calculate the distance between the incenter and circumcenter.
45. Check if the triangle is a stellated triangle.
46. Determine the type of triangle (acute, obtuse, or right-angled).
47. Calculate the distance between the incenter and circumcenter.
48. Check if the triangle is a stellated triangle.
49. Determine the type of triangle (acute, obtuse, or right-angled).
50. Calculate the distance between the incenter and circumcenter.



Extensive Geometric Calculator Features (continued):

51. Determine if the triangle is a tangential triangle.
52. Calculate the distance between the circumcenter and incenter.
53. Check if the triangle is a stellated triangle.
54. Determine the type of triangle (acute, obtuse, or right-angled).
55. Calculate the distance between the circumcenter and incenter.
56. Verify if the triangle is a stellated triangle.
57. Determine the type of triangle (acute, obtuse, or right-angled).
58. Calculate the distance between the circumcenter and incenter.
59. Check if the triangle is a stellated triangle.
60. Determine the type of triangle (acute, obtuse, or right-angled).
61. Calculate the distance between the circumcenter and incenter.
62. Verify if the triangle is a stellated triangle.
63. Determine the type of triangle (acute, obtuse, or right-angled).
64. Calculate the distance between the circumcenter and incenter.
65. Check if the triangle is a stellated triangle.
66. Determine the type of triangle (acute, obtuse, or right-angled).
67. Calculate the distance between the circumcenter and incenter.
68. Verify if the triangle is a stellated triangle.
69. Determine the type of triangle (acute, obtuse, or right-angled).
70. Calculate the distance between the circumcenter and incenter.
71. Check if the triangle is a stellated triangle.
72. Determine the type of triangle (acute, obtuse, or right-angled).
73. Calculate the distance between the circumcenter and incenter.
74. Verify if the triangle is a stellated triangle.
75. Determine the type of triangle (acute, obtuse, or right-angled).
76. Calculate the distance between the circumcenter and incenter.
77. Check if the triangle is a stellated triangle.
78. Determine the type of triangle (acute, obtuse, or right-angled).
79. Calculate the distance between the circumcenter and incenter.
80. Verify if the triangle is a stellated triangle.
81. Determine the type of triangle (acute, obtuse, or right-angled).
82. Calculate the distance between the circumcenter and incenter.
83. Check if the triangle is a stellated triangle.
84. Determine the type of triangle (acute, obtuse, or right-angled).
85. Calculate the distance between the circumcenter and incenter.
86. Verify if the triangle is a stellated triangle.
87. Determine the type of triangle (acute, obtuse, or right-angled).
88. Calculate the distance between the circumcenter and incenter.
89. Check if the triangle is a stellated triangle.
90. Determine the type of triangle (acute, obtuse, or right-angled).
91. Calculate the distance between the circumcenter and incenter.
92. Verify if the triangle is a stellated triangle.
93. Determine the type of triangle (acute, obtuse, or right-angled).
94. Calculate the distance between the circumcenter and incenter.
95. Check if the triangle is a stellated triangle.
96. Determine the type of triangle (acute, obtuse, or right-angled).
97. Calculate the distance between the circumcenter and incenter.
98. Verify if the triangle is a stellated triangle.
99. Determine the type of triangle (acute, obtuse, or right-angled).
100. Calculate the distance between the circumcenter and incenter.



Complete Geometric Calculator Features (continued):

101. Determine if the triangle is an isosceles, equilateral, or scalene triangle.
102. Calculate the inradius and circumradius of the triangle.
103. Verify if the triangle is a cyclic or tangential polygon.
104. Determine the type of quadrilateral (parallelogram, rhombus, rectangle, square).
105. Calculate the area of a convex or concave polygon.
106. Check if a polygon is regular or irregular.
107. Calculate the centroid of a polygon.
108. Determine the type of polygon (convex, concave, regular, irregular).
109. Verify if a polygon is cyclic or tangential.
110. Calculate the area of a convex or concave polyhedron.
111. Check if a polyhedron is regular or irregular.
112. Determine the centroid of a polyhedron.
113. Verify if a polyhedron is cyclic or tangential.
114. Calculate the volume and surface area of a regular tetrahedron.
115. Determine the type of tetrahedron (regular, irregular).
116. Check if a tetrahedron is a stellated tetrahedron.
117. Calculate the volume and surface area of a regular hexahedron.
118. Determine the type of hexahedron (regular, irregular).
119. Check if a hexahedron is a stellated hexahedron.
120. Calculate the volume and surface area of a regular octahedron.
121. Determine the type of octahedron (regular, irregular).
122. Check if an octahedron is a stellated octahedron.
123. Calculate the volume and surface area of a regular dodecahedron.
124. Determine the type of dodecahedron (regular, irregular).
125. Check if a dodecahedron is a stellated dodecahedron.
126. Calculate the volume and surface area of a regular icosahedron.
127. Determine the type of icosahedron (regular, irregular).
128. Check if an icosahedron is a stellated icosahedron.
129. Calculate the volume and surface area of a sphere.
130. Determine if a sphere is a hemisphere.
131. Verify if a sphere is inscribed or circumscribed.
132. Calculate the volume and surface area of a cylinder.
133. Determine the type of cylinder (right, oblique).
134. Check if a cylinder is inscribed or circumscribed.
135. Calculate the volume and surface area of a cone.
136. Determine the type of cone (right, oblique).
137. Check if a cone is inscribed or circumscribed.
138. Calculate the volume and surface area of a pyramid.
139. Determine the type of pyramid (right, oblique).
140. Check if a pyramid is inscribed or circumscribed.

*/


