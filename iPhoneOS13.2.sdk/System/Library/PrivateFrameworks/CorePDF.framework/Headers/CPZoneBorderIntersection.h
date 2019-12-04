//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>


@class CPZoneBorder;

__attribute__((visibility("hidden")))
@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying>
{
    struct CGRect intersectionRect;
    CPZoneBorder *intersectingBorder;
    _Bool forwardVector;
    _Bool backwardVector;
}

- (long long)comparePositionLengthwise:(id)arg1;
- (_Bool)backwardVector;
- (void)setBackwardVector:(_Bool)arg1;
- (_Bool)forwardVector;
- (void)setForwardVector:(_Bool)arg1;
- (id)intersectingBorder;
- (void)setIntersectingBorder:(id)arg1;
- (struct CGRect)intersectionRect;
- (void)setIntersectionRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSuper;

@end

