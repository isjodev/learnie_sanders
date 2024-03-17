/* Print the fahrenheight - celsius table with a header, 
 * Print the celsius - fahrenheight table with a header. 
 */ 
#include <stdio.h>
#include <stdlib.h> 

typedef struct temperature_config {
  float min; 
  float max; 
  float step; 
} temp_conf; 

void print_fahrenheit_celsius_table(temp_conf config) {
  printf("+----------------+-------------+\n"); 
  printf("| Fahrenheit     | Celsius     |\n");
  printf("+----------------+-------------+\n"); 
  float fahrenheit = config.min; 
  for (float i = config.min; i < config.max; i += config.step) {
    float celsius = (5.0/9.0) * (i - 32); 
    printf("| %-6.1f         | %-6.1f      |\n", i, celsius); 
  }
  printf("+----------------+-------------+\n"); 
}

void print_celsius_fahrenheit_table(temp_conf config) {
  printf("+----------------+-------------+\n"); 
  printf("| Celsius        | Fahrenheit  |\n");
  printf("+----------------+-------------+\n"); 
  float celsius = config.min; 
  for (float i = config.min; i < config.max; i += config.step) {
    float fahrenheit = (i * (9.0/5.0)) + 32; 
    printf("| %-6.1f         | %-6.1f      |\n", i, fahrenheit); 
  }
  printf("+----------------+-------------+\n"); 
}

temp_conf get_temperature_config() {
  temp_conf config;  

  printf("Enter minimum: \n"); 
  scanf("%f", &config.min); 

  printf("Enter maximum: \n"); 
  scanf("%f", &config.max); 

  printf("Enter step: \n"); 
  scanf("%f", &config.step); 

  return config; 
}

int main() {
  temp_conf config = get_temperature_config(); 
  print_fahrenheit_celsius_table(config); 
  print_celsius_fahrenheit_table(config); 

  return 0;
}
