//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>





@interface NSTextBlock : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    void *_propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (id)_attributeDescription;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterRange:(struct _NSRange)arg3 layoutManager:(id)arg4;
- (struct CGRect)boundsRectForContentRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (struct CGRect)rectForLayoutAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (void)setBorderColor:(id)arg1;
- (id)borderColorForEdge:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (unsigned long long)verticalAlignment;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3;
- (unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4;
- (unsigned long long)contentWidthValueType;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1 type:(unsigned long long)arg2;
- (unsigned long long)valueTypeForDimension:(unsigned long long)arg1;
- (double)valueForDimension:(unsigned long long)arg1;
- (void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)arg1;
- (double)_valueForParameter:(unsigned long long)arg1;
- (void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_destroyFloatStorage;
- (void)_createFloatStorage;
- (id)init;

@end

