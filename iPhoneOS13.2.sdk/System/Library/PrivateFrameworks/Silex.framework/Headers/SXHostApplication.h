//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXHost-Protocol.h>

@class NSString, UIApplication;

@interface SXHostApplication : NSObject <SXHost>
{
    UIApplication *_application;
}

@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (_Bool)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
@property(readonly, nonatomic) _Bool active;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

