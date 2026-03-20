#include <string>

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string);

    void establecerNombreCurso(std::string);
    std::string obtenerNombreCurso() const;
    void mostrarMensaje() const;

    void establecerNombreInstructor(std::string);
    std::string obtenerNombreInstructor() const;

private:
    std::string nombreCurso;
    std::string nombreInstructor;
};
