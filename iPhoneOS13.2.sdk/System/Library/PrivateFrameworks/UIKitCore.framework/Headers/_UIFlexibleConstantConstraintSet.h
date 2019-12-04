//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIConstantConstraintSet.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet
{
    NSLayoutConstraint *_minConstraint;
    NSLayoutConstraint *_maxConstraint;
    NSLayoutConstraint *_equalityConstraint;
    _Bool _equalityConstraintPrefersMin;
    double _minConstant;
    double _maxConstant;
    double _equalityConstant;
}

+ (id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2;
+ (id)constraintSetWithRequiredEqualityConstraint:(id)arg1;
@property(nonatomic) double equalityConstant; // @synthesize equalityConstant=_equalityConstant;
@property(nonatomic) double maxConstant; // @synthesize maxConstant=_maxConstant;
@property(nonatomic) double minConstant; // @synthesize minConstant=_minConstant;
- (id)_otherInequalityConstraint;
- (id)_preferredInequalityConstraint;
- (void)_updateInequalityConstants;
- (_Bool)_equalityConstraintIsRequired;
- (id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(_Bool)arg3;

@end

