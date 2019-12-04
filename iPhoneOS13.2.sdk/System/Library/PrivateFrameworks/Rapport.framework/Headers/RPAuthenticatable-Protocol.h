//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol RPAuthenticatable
@property(copy, nonatomic) id /* block */ promptForPasswordHandler;
@property(copy, nonatomic) id /* block */ hidePasswordHandler;
@property(copy, nonatomic) id /* block */ showPasswordHandler;
@property(copy, nonatomic) id /* block */ authCompletionHandler;
@property(readonly, nonatomic) int passwordTypeActual;
@property(nonatomic) int passwordType;
@property(copy, nonatomic) NSString *password;
@property(nonatomic) unsigned int pairVerifyFlags;
@property(nonatomic) unsigned int pairSetupFlags;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)tryPassword:(NSString *)arg1;
@end

