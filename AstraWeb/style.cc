/* Reset y estilos base */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: 'Poppins', sans-serif;
    line-height: 1.6;
    color: #333;
    background-color: #f5f6fa;
}

/* Sección Hero */
.hero {
    background: linear-gradient(135deg, #7289da, #4e5d94);
    color: white;
    text-align: center;
    padding: 100px 20px;
}

.hero-content h1 {
    font-size: 3.5rem;
    font-weight: 700;
    margin-bottom: 20px;
}

.hero-content p {
    font-size: 1.2rem;
    margin-bottom: 30px;
}

.btn-primary {
    display: inline-block;
    padding: 12px 30px;
    background-color: #5865f2;
    color: white;
    text-decoration: none;
    border-radius: 5px;
    font-weight: 600;
    transition: background-color 0.3s ease;
}

.btn-primary:hover {
    background-color: #4752c4;
}

/* Sección Características */
.features {
    padding: 60px 20px;
    text-align: center;
    background-color: white;
}

.features h2 {
    font-size: 2.5rem;
    margin-bottom: 40px;
}

.feature-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
    gap: 20px;
    max-width: 1200px;
    margin: 0 auto;
}

.feature-card {
    background-color: #f5f6fa;
    padding: 20px;
    border-radius: 10px;
    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
    transition: transform 0.3s ease;
}

.feature-card:hover {
    transform: translateY(-5px);
}

.feature-card h3 {
    font-size: 1.5rem;
    margin-bottom: 10px;
}

.feature-card p {
    color: #666;
}

/* Sección Cómo Usarlo */
.how-to {
    padding: 60px 20px;
    background-color: #f5f6fa;
    text-align: center;
}

.how-to h2 {
    font-size: 2.5rem;
    margin-bottom: 30px;
}

.how-to ol {
    max-width: 600px;
    margin: 0 auto 30px;
    text-align: left;
    font-size: 1.1rem;
}

.how-to li {
    margin-bottom: 10px;
}

.how-to code {
    background-color: #e0e0e0;
    padding: 2px 6px;
    border-radius: 3px;
}

.btn-secondary {
    display: inline-block;
    padding: 12px 30px;
    background-color: #43b581;
    color: white;
    text-decoration: none;
    border-radius: 5px;
    font-weight: 600;
    transition: background-color 0.3s ease;
}

.btn-secondary:hover {
    background-color: #369c6d;
}

/* Sección Contacto */
.contact {
    padding: 60px 20px;
    text-align: center;
    background-color: white;
}

.contact h2 {
    font-size: 2.5rem;
    margin-bottom: 20px;
}

.contact p {
    font-size: 1.1rem;
    margin-bottom: 30px;
    color: #666;
}

/* Pie de página */
footer {
    background-color: #2c2f33;
    color: white;
    text-align: center;
    padding: 20px;
}

/* Responsividad */
@media (max-width: 768px) {
    .hero-content h1 {
        font-size: 2.5rem;
    }

    .hero-content p {
        font-size: 1rem;
    }

    .features h2,
    .how-to h2,
    .contact h2 {
        font-size: 2rem;
    }
}