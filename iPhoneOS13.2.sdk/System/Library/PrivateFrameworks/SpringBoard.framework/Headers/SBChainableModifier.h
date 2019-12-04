//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBChainableModifierContext-Protocol.h>
#import <SpringBoard/SBChainableModifierQuery-Protocol.h>

@class NSString, SBModifierCacheCoordinator, SBModifierMethodCache;
@protocol SBChainableModifierDelegate;

@interface SBChainableModifier : NSObject <SBChainableModifierQuery, SBChainableModifierContext, BSDescriptionProviding>
{
    SBModifierMethodCache *_queryCache;
    SBModifierMethodCache *_contextCache;
    _Bool _hasNotifiedChildrenDidMoveToParent;
    SBChainableModifier *_parentModifier;
    id <SBChainableModifierDelegate> _delegate;
    SBChainableModifier *_previousContextModifier;
    SBChainableModifier *_nextQueryModifier;
    long long _modifierLevel;
    NSString *_key;
}

+ (void)verifyIsFloorModifier;
+ (id)newContextCache;
+ (id)newQueryCache;
+ (id)newCacheWithSelectorList:(id)arg1 subsequentMethodCacheFunc:(CDUnknownFunctionPointerType)arg2 cachingDictionary:(id)arg3;
+ (id)contextSelectors;
+ (id)querySelectors;
+ (void)initalizeIMPCaching;
+ (id)baseClassForQueryProtocol;
+ (id)queryProtocol;
+ (id)contextProtocol;
+ (void)initialize;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long modifierLevel; // @synthesize modifierLevel=_modifierLevel;
@property(retain, nonatomic) SBChainableModifier *nextQueryModifier; // @synthesize nextQueryModifier=_nextQueryModifier;
@property(nonatomic) SBChainableModifier *previousContextModifier; // @synthesize previousContextModifier=_previousContextModifier;
@property(nonatomic) __weak id <SBChainableModifierDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) SBChainableModifier *parentModifier; // @synthesize parentModifier=_parentModifier;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_insertModifier:(id)arg1 afterModifier:(id)arg2 queryAction:(unsigned long long)arg3 contextAction:(unsigned long long)arg4;
- (id)_lastDeepChildModifier;
- (void)_notifyChildrenDidMoveToParentIfNeeded;
- (_Bool)_anyDescendentImplementsAnyContextMethod;
- (_Bool)_anyDescendentImplementsAnyQueryMethod;
@property(retain, nonatomic) SBModifierCacheCoordinator *contextCacheCoordinator;
@property(retain, nonatomic) SBModifierCacheCoordinator *queryCacheCoordinator;
- (void)performTransactionWithTemporaryChildModifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (_Bool)respondsToSelectorWithoutForwarding:(SEL)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)childModifierByKey:(id)arg1;
- (void)removeChildModifiers:(id)arg1;
- (void)_removeChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3;
- (void)removeChildModifier:(id)arg1;
- (void)_addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3 queryAction:(unsigned long long)arg4 contextAction:(unsigned long long)arg5;
- (void)addChildModifier:(id)arg1 atLevel:(long long)arg2 key:(id)arg3;
- (void)_addChildModifier:(id)arg1 queryAction:(unsigned long long)arg2 contextAction:(unsigned long long)arg3;
- (void)addChildModifier:(id)arg1;
- (void)enumerateChildModifiersWithBlock:(id /* block */)arg1;
- (_Bool)containsChildModifier:(id)arg1;
- (unsigned long long)childModifierCount;
- (void)dealloc;
- (id)init;
- (id)_createAndConfigureDynamicModifierWithName:(id)arg1;
- (id)_previousDynamicContextModifier;
- (id)_nextDynamicQueryModifier;
- (void)_addImplementation:(id)arg1 forClass:(Class)arg2 selector:(SEL)arg3 protocol:(id)arg4;
- (void)providePreviousContextImplementation:(id)arg1 forSelector:(SEL)arg2;
- (void)provideNextQueryImplementation:(id)arg1 forSelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

