// Get the search form element
var searchForm = document.querySelector('.search-form');

// Add event listener for form submission
searchForm.addEventListener('submit', function(event) {
    event.preventDefault(); // Prevent default form submission behavior

    // Get the search input value
    var searchInput = document.querySelector('.form-control').value.toLowerCase();

    // Get the element to display search results
    var searchResults = document.getElementById('search-results');

    // Check if the search input contains the word "watch"
    if (searchInput.includes('watch')) {
        // Display search results
        searchResults.innerHTML = '<p>Related information are there!</p>';
    } else {
        // Display no information found message
        searchResults.innerHTML = '<p>No Information Found</p>';
    }
});

document.addEventListener('DOMContentLoaded', function() {
    const readMoreLink = document.querySelector('.read-more');
    const hiddenParagraphs = document.querySelectorAll('.hidden');

    readMoreLink.addEventListener('click', function(event) {
        event.preventDefault();
        hiddenParagraphs.forEach(function(paragraph) {
            paragraph.classList.toggle('visible'); // Toggle visibility of hidden paragraphs
        });
    });
});





