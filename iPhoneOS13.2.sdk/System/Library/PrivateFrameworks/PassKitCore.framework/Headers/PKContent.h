//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding>
{
    PKBarcode *_barcode;
    NSArray *_storeIdentifiers;
    NSURL *_appLaunchURL;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)contentWithFileURL:(id)arg1;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property(retain, nonatomic) PKBarcode *barcode; // @synthesize barcode=_barcode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end

