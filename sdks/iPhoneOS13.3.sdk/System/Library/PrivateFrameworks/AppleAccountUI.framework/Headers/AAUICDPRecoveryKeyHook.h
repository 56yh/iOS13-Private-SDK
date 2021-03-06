//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@protocol AAUIServerHookDelegate;

@interface AAUICDPRecoveryKeyHook : NSObject <AAUIServerHook>
{
    id <AAUIServerHookDelegate> _delegate;
}

+ (id)helperWithPresenter:(id)arg1 forceInline:(BOOL)arg2;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_generateRecoveryKeyWithType:(long long)arg1 attributes:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_deleteRecoveryKey:(id /* CDUnknownBlockType */)arg1;
- (void)processObjectModel:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_shouldMatchAction:(id)arg1;
- (BOOL)shouldMatchModel:(id)arg1;
- (BOOL)shouldMatchElement:(id)arg1;

@end

