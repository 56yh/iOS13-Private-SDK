//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/UAPBIRConverter-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRSandboxExtConverter : NSObject <UAPBIRConverter>
{
}

+ (void)registerConverter;
- (id)convertIRDataToPlatform:(id)arg1;
- (id)convertPlatformDataToIR:(id)arg1;
- (id)typeString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

