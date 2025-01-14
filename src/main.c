#include "raylib.h"

int main(void) {
    InitWindow(800, 450, "raylib [core] example - basic window");

    Camera3D camera = {0};
    camera.position = (Vector3){10.0f, 10.0f, 10.0f};
    camera.target = (Vector3){0.0f, 0.0f, 0.0f};
    camera.up = (Vector3){0.0f, 1.0f, 0.0f};
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    while (!WindowShouldClose()) {
        BeginDrawing();

        BeginMode3D(camera);
        ClearBackground(RAYWHITE);
        DrawCube((Vector3){0, 0, 0}, 2.0f, 2.0f, 2.0f, RED);
        DrawCube((Vector3){50, 50, 0}, 1000, 1000, 20, RED);
        EndMode3D();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
