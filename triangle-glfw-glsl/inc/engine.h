#ifndef ENGINE_H
#define ENGINE_H

int Engine_init(int width, int height);
void Engine_set_key_callback(void *key_callback);
void Engine_print_hardware_info();
void Engine_print_program_log();
void Engine_print_gl_error(const char *message);
void Engine_draw_everything();
int Engine_is_running();

#endif
