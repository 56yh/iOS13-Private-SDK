//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling>
{
    NSExtensionContext *_extensionContext;
}

@property(retain, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)_finish;
- (void)requestUpdatedWithResult:(id)arg1 completion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

