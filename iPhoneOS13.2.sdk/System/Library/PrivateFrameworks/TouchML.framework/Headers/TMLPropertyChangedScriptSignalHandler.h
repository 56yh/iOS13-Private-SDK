//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchML/TMLScriptSignalHandler.h>

#import <TouchML/TMLBinder-Protocol.h>

@class NSString, TMLBinding;

@interface TMLPropertyChangedScriptSignalHandler : TMLScriptSignalHandler <TMLBinder>
{
    TMLBinding *_binding;
}

- (void)bindingValueChanged:(id)arg1;
- (void)detach;
- (void)attach;
@property(readonly, nonatomic) long long bindingOrder;
- (id)initWithFunctionName:(id)arg1 context:(id)arg2 binding:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

