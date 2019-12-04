//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class UIColor;

@interface PXViewSpec : NSObject <NSCopying>
{
    _Bool _hidden;
    struct UIColor *_backgroundColor;
    struct UIColor *_selectionHighlightColor;
    struct UIColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    double _displayScale;
    long long _compositingFilterType;
}

@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long compositingFilterType; // @synthesize compositingFilterType=_compositingFilterType;
@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

