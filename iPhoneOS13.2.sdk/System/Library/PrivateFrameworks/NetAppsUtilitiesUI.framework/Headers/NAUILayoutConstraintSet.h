//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface NAUILayoutConstraintSet : NSObject
{
    UIView *_owningView;
    id /* block */ _builder;
    NSArray *_constraints;
}

@property(copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) id /* block */ builder; // @synthesize builder=_builder;
@property(readonly, nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
- (void)updateConstraintConstants;
- (void)invalidate;
- (void)activateIfNeeded;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithOwningView:(id)arg1 constraintBuilder:(id /* block */)arg2;

@end

