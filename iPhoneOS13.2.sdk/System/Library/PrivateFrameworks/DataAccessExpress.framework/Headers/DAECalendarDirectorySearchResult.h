//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_preferredAddress;
    NSString *_principalPath;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(retain, nonatomic) NSString *preferredAddress; // @synthesize preferredAddress=_preferredAddress;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

