//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXFill : NSObject
{
}

+ (id)readImageFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4;
+ (id)readBlipRefFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4 forBullet:(_Bool)arg5;
+ (id)readFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)presetPatternFillTypeEnumMap;
+ (id)pathGradientFillTypeEnumMap;
+ (id)tileFlipModeEnumMap;
+ (id)readPresetPatternFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readTile:(struct _xmlNode *)arg1 tile:(id)arg2;
+ (void)readStretch:(struct _xmlNode *)arg1 stretch:(id)arg2;
+ (id)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readPathGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLinearGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 toGradientFill:(id)arg2 drawingState:(id)arg3;
+ (id)readSolidFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readGroupFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readNullFillFromXmlNode:(struct _xmlNode *)arg1;

@end

