//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISceneLayerTarget-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISceneLayerTargetWithContext : NSObject <UISceneLayerTarget>
{
    id _context;
    unsigned long long _equalityType;
    id /* block */ _block;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)matchesLayer:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1 equalityType:(unsigned long long)arg2 matchingBlock:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

