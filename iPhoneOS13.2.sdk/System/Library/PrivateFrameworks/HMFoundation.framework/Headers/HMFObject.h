//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMFObject : NSObject <HMFObject>
{
}

+ (id)shortDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

