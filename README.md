# beginner_tutorial ROS_package

## Descripción general
Tutorial clásico de ROS talker-listener pero ajustado y comentado para que sea más complensible para los programadores que están iniciando en ROS.

## Proceso de instalación
Se considera que la computadora del usuario ya tiene correctamente instalado ROS, GIT y que ya tiene la carpeta de `catkin_ws` correctamente inicializada.

En una Terminal ejecutar las siguientes instrucciones:
```
$ cd ~/catkin_ws/src
$ git clone https://github.com/aaceves/beginner_tutorial.git
$ cd ~/catkin_ws
$ catkin build
$ source devel/setup.bash
```
El proceso de compilación debe terminar sin errores.

## Ejemplo de ejecución

En tres Terminales diferentes ejecutar cada una de las siguientes lineas:
```
$ roscore
$ rosrun beginner_tutorial talker
$ rosrun beginner_tutorial listener
```
Ejecutar en una cuarta Terminal las siguientes líneas y analizar sus resultados:
```
rosnode list
rosnode info listener
rostopic list
rostopic info chatter
rostopic hz chatter
rostopic type chatter
rosmsg show std_msgs/String
rqt_graph
```
Cuando se desea ejecutar nodos escritos en Python, no es necesario compilar nada con `catkin` pero si es vital cambiar los permisos de los archivos `talker.py` y `listener.py` para que tengan permisos de ejecución. Esto se hace con los siguientes comandos:
```
$ cd ~/catkin_ws/src/beginner_tutorial/src 
$ chmod +x talker.py
$ chmod +x listener.py
```
Ahora, en tres Terminales diferentes ejecutar cada una de las siguientes lineas:
```
$ roscore
$ rosrun beginner_tutorial talker.py
$ rosrun beginner_tutorial listener.py
```

## Autores y colaboradores
Este paquete está originalmente presentado en el wiki de ROS en la sección de Beginners Level. Sin embargo fue ajustado ligeramente por el Dr. Alejandro Aceves-López para que sea más comprensible a los programadores nuevos de ROS.

## Referencias
1. ROS Tutorials - Beginner Level, "Writing a Simple Publisher and Subscriber (C++)",  [link](http://wiki.ros.org/ROS/Tutorials).
