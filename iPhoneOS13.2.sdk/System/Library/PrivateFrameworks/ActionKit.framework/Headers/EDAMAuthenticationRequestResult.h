//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject
{
    NSNumber *_userId;
    NSString *_userEmail;
    NSNumber *_result;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;

@end

