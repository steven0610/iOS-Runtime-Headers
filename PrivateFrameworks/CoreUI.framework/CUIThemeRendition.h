/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSData, NSString;

@interface CUIThemeRendition : NSObject {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    struct { 
        unsigned int isHeaderFlaggedFPO : 1; 
        unsigned int isExcludedFromContrastFilter : 1; 
        unsigned int reserved : 30; 
    int artworkStatus;
    int blendMode;
    unsigned int colorSpaceID;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *key;
    NSString *name;
    float opacity;
    } renditionFlags;
    unsigned int scale;
    NSData *srcData;
    } stackKey[16];
    unsigned int subtype;
    int type;
    int validLookGradation;
}

@property int blendMode;
@property float opacity;

+ (id)displayNameForRenditionType:(int)arg1;
+ (id)filteredCSIDataFromBaseCSIData:(id)arg1;
+ (Class)renditionClassForRenditionType:(int)arg1;

- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (int)artworkStatus;
- (int)blendMode;
- (unsigned int)colorSpaceID;
- (void)dealloc;
- (id)description;
- (id)effectPreset;
- (id)gradient;
- (float)gradientDrawingAngle;
- (unsigned int)gradientStyle;
- (id)imageForSliceIndex:(int)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2;
- (BOOL)isHeaderFlaggedFPO;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (BOOL)isValidForLookGradation:(int)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)maskForSliceIndex:(int)arg1;
- (id)metrics;
- (id)name;
- (float)opacity;
- (float)scale;
- (void)setBlendMode:(int)arg1;
- (void)setOpacity:(float)arg1;
- (id)sliceInformation;
- (unsigned int)subtype;
- (int)type;
- (struct CGImage { }*)unslicedImage;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;

@end