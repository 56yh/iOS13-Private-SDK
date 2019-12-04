//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIColor;

@interface _TVMonogramDecorator : TVImageScaleDecorator
{
    UIColor *_borderColor;
    double _borderWidth;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (_Bool)needsAlphaForImage:(id)arg1;
- (id)decoratorIdentifier;

@end

