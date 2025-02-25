
#define BUILD_LIB
#include "RasterDevice.h"
#undef BUILD_LIB

#include "raster_int.h"


/*
* Module:                 Raster.dll
* Entry point:            0x10003550
*/

void Cls(byte r, byte g, byte b) {
        return B_3D_raster_device->ClsRGB(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003574
*/

void SwapBuffers() {
        return B_3D_raster_device->SwapBuffers();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003589
*/

long BmpHandle(const char *bmpName) {
        return B_3D_raster_device->BmpHandle(bmpName);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100035A3
*/

const char *BmpName(long handle) {
        return B_3D_raster_device->BmpName(handle);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100035BD
*/

int nTextures() {
        return B_3D_raster_device->nTextures();
}


/*
* Module:                 Raster.dll
* Entry point:            0x100035D2
*/

int GetTextureInfo(int index, int &w, int &h, int &depth) {

        return B_3D_raster_device->GetTextureInfo(
                index, w, h, depth
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x100035F8
*/

void SetFlags(long flags) {
        B_3D_raster_device->SetFlags(flags);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003612
*/

void SetVideoSettings(float gamma, float contrast, float brightness) {
        B_3D_raster_device->SetVideoSettings(
                gamma, contrast, brightness
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003633
*/

void SetGammaCorrection(float gamma) {
        B_3D_raster_device->SetGammaCorrection(gamma);
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000364D
*/

float GetGammaCorrection() {
        return B_3D_raster_device->GetGammaCorrection();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003662
*/

void SetContrast(float contrast) {
        return B_3D_raster_device->SetContrast(contrast);
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000367C
*/

float GetContrast() {
        return B_3D_raster_device->GetContrast();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003691
*/

void SetBrightness(float brightness) {
        B_3D_raster_device->SetBrightness(brightness);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100036AB
*/

float GetBrightness() {
        return B_3D_raster_device->GetBrightness();
}


/*
* Module:                 Raster.dll
* Entry point:            0x100036C0
*/

void SetTextMode(int text_mode) {
        B_3D_raster_device->SetTextMode(text_mode);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100036DD
*/

int GetTextMode() {
        return B_3D_raster_device->GetTextMode();
}


/*
* Module:                 Raster.dll
* Entry point:            0x100036F5
*/

void SetTextScale(float scale_x, float scale_y) {
        B_3D_raster_device->SetTextScale(scale_x, scale_y);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003716
*/

void GetTextScale(float &scale_x, float &scale_y) {
        B_3D_raster_device->GetTextScale(scale_x, scale_y);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003737
*/

void Line(int x1, int y1, int x2, int y2) {
        B_3D_raster_device->Line(x1, y1, x2, y2);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003760
*/

void LineTo(int x, int y) {
        B_3D_raster_device->LineTo(x, y);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003781
*/

void Rectangle(int x1, int y1, int x2, int y2) {
        B_3D_raster_device->Rectangle(x1, y1, x2, y2);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100037AA
*/

void solid_rectangle(int x1, int y1, int x2, int y2) {
        B_3D_raster_device->solid_rectangle(x1, y1, x2, y2);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100037D3
*/

void SetPosition(float x, float y) {
        B_3D_raster_device->SetPosition(x, y);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100037F4
*/

void GetPosition(float &x, float &y) {
        B_3D_raster_device->GetPosition(x, y);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003815
*/

void set_pen_color(byte r, byte g, byte b) {
        B_3D_raster_device->set_pen_color(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003839
*/

void set_fill_color(byte r, byte g, byte b) {
        B_3D_raster_device->set_fill_color(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000385D
*/

void set_alpha(float alpha) {
        B_3D_raster_device->set_alpha(alpha);
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000387A
*/
 
void set_text_blur_color(byte r, byte g, byte b) {
        B_3D_raster_device->set_text_blur_color(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000389E
*/

void set_text_blur_alpha(float alpha) {
        B_3D_raster_device->set_text_blur_alpha(alpha);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100038BB
*/

float get_text_blur_alpha() {
        return B_3D_raster_device->get_text_blur_alpha();
}


/*
* Module:                 Raster.dll
* Entry point:            0x100038D3
*/

void SetTextBlur(int blurLeft, int blurTop, int blurRight, int blurBottom) {
        B_3D_raster_device->SetTextBlur(
                blurLeft, blurTop, blurRight, blurBottom
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x100038FC
*/
 
void GetTextBlur(
        int &blurLeft, int &blurTop, int &blurRight, int &blurBottom
) {
        B_3D_raster_device->GetTextBlur(
                blurLeft, blurTop, blurRight, blurBottom
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003925
*/

void SetTextShadow(int x_shadow, int y_shadow) {
         B_3D_raster_device->SetTextShadow(x_shadow, y_shadow);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003946
*/

void GetTextShadow(int &x_shadow, int &y_shadow) {
        B_3D_raster_device->GetTextShadow(x_shadow, y_shadow);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003967
*/

float get_alpha() {
        return B_3D_raster_device->get_alpha();
}


/*
* Module:                 Raster.dll
* Entry point:            0x1000397F
*/

void set_text_color(byte r, byte g, byte b) {
        B_3D_raster_device->set_text_color(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100039A3
*/
 
void set_text_alpha(float alpha) {
        B_3D_raster_device->set_text_alpha(alpha);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100039C0
*/

float get_text_alpha() {
        return B_3D_raster_device->get_text_alpha();
}


/*
* Module:                 Raster.dll
* Entry point:            0x100039D8
*/
 
int WriteText(const char *text) {
        return B_3D_raster_device->WriteText(text);
}


/*
* Module:                 Raster.dll
* Entry point:            0x100039F5
*/

void SysWrite(int x, int y, const char *text, byte r, byte g, byte b) {
        B_3D_raster_device->SysWrite(x, y, text, r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003A25
*/

int get_image(
        int x, int y, int w, int h, const char *color_style,
        const char *stretch_or_centered, int image_size, long image_data
) {
        return B_3D_raster_device->get_image(
                x, y, w, h, color_style, stretch_or_centered, image_size,
                image_data
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003A5E
*/

void draw_image(
        int w, int h, const char *color_style, const char *is_normal,
        const void * image_data
) {
        B_3D_raster_device->draw_image(w, h, color_style, is_normal, image_data);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003A8B
*/

void set_background_image(
        int w, int h, const char *is_rgb, const char *is_normal,
        const char *stretch_or_centered, long image_data
) {
        B_3D_raster_device->set_background_image(
                w, h, is_rgb, is_normal, stretch_or_centered, image_data
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003ABB
*/

void remove_background_image() {
        if (B_3D_raster_device != NULL)
                B_3D_raster_device->remove_background_image();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003ADC
*/

void draw_bitmap(long handle, int w, int h) {
        B_3D_raster_device->draw_bitmap(handle, w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003B00
*/

void set_clip_window(int x, int y, int w, int h) {
        B_3D_raster_device->set_clip_window(x, y, w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003B29
*/

void GetClipWindow(int &x, int &y, int &w, int &h) {
        B_3D_raster_device->GetClipWindow(x, y, w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003B52
*/

int SetRasterParameter(const char *parameter, const char *value) {
        return B_3D_raster_device->SetRasterParameter(parameter, value);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003B73
*/

const char *GetRasterParameter(const char *parameter) {
        return B_3D_raster_device->GetRasterParameter(parameter);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003B90
*/

void set_clip_active(int clip_active) {
        B_3D_raster_device->set_clip_active(clip_active);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003BAD
*/

int GetClipActive() {
        return B_3D_raster_device->GetClipActive();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003BC5
*/

void GetSize(int &w, int &h) {
        B_3D_raster_device->GetSize(w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003BE6
*/

int SetWindowSize(int w, int h) {
        return B_3D_raster_device->SetWindowSize(w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003C07
*/

int GetWindowSize(int &w, int &h) {
        return B_3D_raster_device->GetWindowSize(w, h);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003C28
*/

int FullScreen() {
        return B_3D_raster_device->FullScreen();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003C40
*/

int nVideoModes() {
        return B_3D_raster_device->nVideoModes();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003C58
*/

int GetVideoModeDscr(
        int mode_index, int &depth, int &w, int &h, int &flags,
        int &frequency
) {
        return B_3D_raster_device->GetVideoModeDscr(
                mode_index, depth, w, h, flags, frequency
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003C88
*/

int SetVideoMode(int mode_index) {
        return B_3D_raster_device->SetVideoMode(mode_index);
}

/*
................................................................................
................................................................................
................................................................................
................................................................................
*/

/*
* Module:                 Raster.dll
* Entry point:            0x10003CCE
*/

int GetCurrentMode(
        int &unknown1, int &w, int &h, int &unknown4,
        int &unknown5
) {
        return B_3D_raster_device->GetCurrentMode(
                unknown1, w, h, unknown4, unknown5
        );
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003CFB
*/

const char *ClassIdName() {
        return B_3D_raster_device->ClassIdName();
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003D13
*/

void SetFont(long font_pointer) {
        B_3D_raster_device->SetFont(INT_TO_PTR(font_pointer, B_Font));
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003D30
*/

void SetDomeColor(byte r, byte g, byte b) {
        B_3D_raster_device->SetDomeColor(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003D54
*/

void GetDomeColor(byte &r, byte &g, byte &b) {
        B_3D_raster_device->GetDomeColor(r, g, b);
}


/*
* Module:                 Raster.dll
* Entry point:            0x10003DA6
*/

void UnifyRenderBuffers() {
        B_3D_raster_device->UnifyRenderBuffers();
}
