//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragInteractionEffect-Protocol.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect>
{
    NSMapTable *_liftOperationByContext;
}

- (void)_setInteractionEffectsLifted:(_Bool)arg1 withOperation:(id)arg2;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

