//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : NSObject
{
}

+ (void)readParagraphProperties:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (int)readBulletScheme:(id)arg1;
+ (void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (void)readAlign:(id)arg1 paragraphProperties:(id)arg2;
+ (void)readTabList:(struct _xmlNode *)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3;
+ (id)readSpacing:(struct _xmlNode *)arg1 drawingState:(id)arg2;

@end

