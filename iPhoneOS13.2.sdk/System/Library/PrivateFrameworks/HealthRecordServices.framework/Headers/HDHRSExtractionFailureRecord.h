//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding>
{
    long long _failureCode;
    NSString *_propertyName;
    NSString *_resourceKeyPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3;
@property(readonly, copy, nonatomic) NSString *resourceKeyPath; // @synthesize resourceKeyPath=_resourceKeyPath;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) long long failureCode; // @synthesize failureCode=_failureCode;
- (id)description;
@property(readonly, copy, nonatomic) NSString *internalDisplaySafeDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

