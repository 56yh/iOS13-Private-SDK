//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject
{
    id <CNDonationLoggerProvider> _loggerProvider;
}

+ (id)extensionAttributes;
+ (id)continuousExtensionsObservable;
+ (id)currentExtensionsObservable;
@property(readonly, nonatomic) id <CNDonationLoggerProvider> loggerProvider; // @synthesize loggerProvider=_loggerProvider;
- (id)donorWithIdentifier:(id)arg1;
- (id)init;

@end

