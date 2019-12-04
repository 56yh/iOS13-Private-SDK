//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDictionary, NSString;

@interface NARGlance : NSObject <NSSecureCoding>
{
    NSString *_appID;
    NSString *_displayName;
    NSString *_glanceID;
    NSDictionary *_localizedDisplayNameMap;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *localizedDisplayNameMap; // @synthesize localizedDisplayNameMap=_localizedDisplayNameMap;
@property(copy, nonatomic) NSString *glanceID; // @synthesize glanceID=_glanceID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

