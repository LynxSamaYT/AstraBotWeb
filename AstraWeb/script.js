document.addEventListener("DOMContentLoaded", () => {
    // Animación suave para los botones
    const buttons = document.querySelectorAll(".btn-primary, .btn-secondary");
    buttons.forEach(button => {
        button.addEventListener("click", () => {
            button.style.transform = "scale(0.95)";
            setTimeout(() => {
                button.style.transform = "scale(1)";
            }, 100);
        });
    });

    // Mostrar mensaje en consola para verificar carga
    console.log("AstraBot Web cargada correctamente");
});