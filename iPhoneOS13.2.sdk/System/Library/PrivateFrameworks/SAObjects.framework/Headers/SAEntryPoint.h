//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>
{
}

+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;
+ (id)entryPoint;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

