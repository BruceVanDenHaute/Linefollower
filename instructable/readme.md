# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1
Bestel alle componenten uit de bill of materials.

### stap 2
We zagen een dun plankje van ongeveer 0,4 cm breedte op een lengte van 13 cm en een breedte van 7 cm. In 1 van de breedte-zijden van het plankje zagen we in het midden een extra gleufje van 3 cm breed en ongeveer 2 cm diep. Aan de andere kant van het houten plankje zagen we 2 gaatjes met diameter 0,5 cm, elk op 1 cm van de zijdes.

### stap 3
Nu we de basis van onze linereader hebben beginnen we met het bevestigen van de andere componenten. Onze sensor plakken we met dubbelzijdige tape onderaan het plankje aan de zijde van de uitgesneden gleuf. Deze gleuf zorgt er voor dat we de nodige kabels van de sensor naar de arduino kunnen trekken. Hierna bevestigen we de Arduino Leonardo plat op het plankje, en achter de arduino plaatsen we ons breadboard verticaal. Dan bevestigen we de motoren in de gerecupereerde houdertjes onderaan het plankje. We draaien de vijzen door de 2 geboren gaten en in de houders steken we de motoren met hierop de wielen. Wanneer dit allemaal gebeurd is kunnen we de batterijhouder bevestigen achter het breadboard.

### stap 4
Nu alles bevestigd is op het het plankje kunnen we beginnen met alles te verbinden volgens het elektrische schema.

### stap 5
Wanneer alles bevestigd is verbinden we met een micro-USB kabel de Arduino met onze laptop en gaan we de code die te vinden is onder code/finaal uploaden op onze arduino. Dit doen we door in de Arduino IDE onder TOOLS eerst aan te duiden dat we werken met een Leonardo en zorgen we er ook voor dat de juiste COM-Poort geselecteerd is.

### stap 6
Nu alles bevestigd is en de code geüpload is, kunnen we onze Arduino losmaken van de laptop en de batterijen verbinden met de gehele schakeling. We zien nu dat onze Arduino oplicht en ook de HC05 zal beginnen knipperen. De Linefollower is klaar voor gebruik
