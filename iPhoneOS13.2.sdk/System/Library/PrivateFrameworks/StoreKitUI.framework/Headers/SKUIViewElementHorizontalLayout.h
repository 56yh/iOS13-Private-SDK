//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIViewElementHorizontalLayout : NSObject
{
    double _elementSpacing;
    double _layoutWidth;
    long long _maximumElementsPerLine;
    long long _maximumLines;
}

@property(nonatomic) long long maximumLines; // @synthesize maximumLines=_maximumLines;
@property(nonatomic) long long maximumElementsPerLine; // @synthesize maximumElementsPerLine=_maximumElementsPerLine;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (id)layoutViewElements:(id)arg1 usingSizingBlock:(id /* block */)arg2;

@end

