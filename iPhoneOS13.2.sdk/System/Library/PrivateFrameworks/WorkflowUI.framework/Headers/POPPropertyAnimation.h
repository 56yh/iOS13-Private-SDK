//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation
{
}

+ (id)animationWithCustomPropertyReadBlock:(id /* block */)arg1 writeBlock:(id /* block */)arg2;
+ (id)animationWithCustomPropertyNamed:(id)arg1 readBlock:(id /* block */)arg2 writeBlock:(id /* block */)arg3;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)currentValue;
@property(copy, nonatomic) id toValue;
@property(copy, nonatomic) id fromValue;
- (void)setProgressMarkers:(id)arg1;
- (id)progressMarkers;
@property(retain, nonatomic) POPAnimatableProperty *property;
@property(nonatomic) unsigned long long clampMode;
@property(nonatomic) double roundingFactor;
@property(nonatomic, getter=isAdditive) _Bool additive;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

