//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying>
{
    _Bool _appliesShadow;
    UIBezierPath *_visiblePath;
    UIColor *_backgroundColor;
    long long _previewMode;
}

@property(nonatomic) _Bool appliesShadow; // @synthesize appliesShadow=_appliesShadow;
@property(nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode; // @synthesize previewMode=_previewMode;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithTextLineRects:(id)arg1;
- (id)init;

@end

