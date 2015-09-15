(function ($) {

	$(document).ready(function(){
		$("#map_search").submit(function( event ) {
			//alert( "/map/"+ $("#term").val() );
			event.preventDefault();
			window.location.replace( "/map/"+ $("#term").val() );
		});
	});

}(jQuery));