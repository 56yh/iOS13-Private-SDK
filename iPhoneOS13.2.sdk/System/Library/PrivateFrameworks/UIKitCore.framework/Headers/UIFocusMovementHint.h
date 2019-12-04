//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface UIFocusMovementHint : NSObject <NSCopying>
{
    double _translationAmount;
    double _rotationAmount;
    struct CGVector _movementDirection;
}

@property(nonatomic) double rotationAmount; // @synthesize rotationAmount=_rotationAmount;
@property(nonatomic) double translationAmount; // @synthesize translationAmount=_translationAmount;
@property(readonly, nonatomic) struct CGVector movementDirection; // @synthesize movementDirection=_movementDirection;
@property(readonly, nonatomic) struct CATransform3D interactionTransform;
@property(readonly, nonatomic) struct CGVector translation;
@property(readonly, nonatomic) struct CGVector rotation;
@property(readonly, nonatomic) struct CATransform3D perspectiveTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMovementDirection:(struct CGVector)arg1 itemSize:(struct CGSize)arg2;

@end

