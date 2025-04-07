# Prueba_arbol

# Lista Enlazada Genérica en C++

Este proyecto implementa una **lista enlazada simple** usando **plantillas genéricas en C++**. El propósito es demostrar cómo crear y manejar estructuras dinámicas sin depender de clases predefinidas como `std::list`.

---

## ¿Qué hace este programa?

- Crea una lista enlazada de 10,000 nodos.
- Cada nodo almacena un `string` con el formato `"Holi0"`, `"Holi1"`, ..., `"Holi9999"`.
- Asigna valores secuenciales a los nodos.
- Libera correctamente la memoria dinámica al final.

---

## Estructura del nodo

```cpp
template<typename T>
struct nodo {
    T value;
    nodo<T> *next = nullptr;
};
