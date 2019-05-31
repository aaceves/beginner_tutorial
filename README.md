# beginner_tutorial ROS_package

## Descripción general
Tutorial clásico de ROS talker-listener pero ajustado y comentado para que sea más complensible para los programadores que están iniciando en ROS.

## Proceso de instalación
Se considera que la computadora del usuario ya tiene correctamente instalado ROS, GIT y que ya tiene la carpeta de `catkin_ws` correctamente inicializada.

En una Terminal ejecutar las siguientes instrucciones:
```
$ cd ~/catkin_ws/src
$ git clone https://github.com/aaceves/beginner_tutorial.git
$ cd  ..
$ catkin build
$ source devel/setup.bash
```
El proceso de compilación debe terminar sin errores.

## Ejemplo de ejecución

En una Terminal ejecutar las siguientes lineas:
```
$ roscore
$ rosrun beginner_tutorial talker
$ rosrun beginner_tutorial listener
```

## Autores y colaboradores
Este paquete está originalmente presentado en el wiki de ROS en la sección de Beginners Level. Sin embargo fue ajustado ligeramente por el Dr. Alejandro Aceves-López para que sea más comprensible a los programadores nuevos de ROS.

## Referencias
[1] ROS Tutorials - Beginner Level, "Writing a Simple Publisher and Subscriber (C++)",  [link](http://wiki.ros.org/ROS/Tutorials).
