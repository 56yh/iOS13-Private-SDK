//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNComposeAddressConcatenator : NSObject
{
    NSString *_andNMoreFormat;
    NSString *_andNMoreNoEllipsisFormat;
    NSString *_nAddressesFormat;
    NSString *_truncatedAddressFormat;
}

+ (id)defaultRecipientListConcatenator;
@property(retain, nonatomic) NSString *truncatedAddressFormat; // @synthesize truncatedAddressFormat=_truncatedAddressFormat;
@property(retain, nonatomic) NSString *nAddressesFormat; // @synthesize nAddressesFormat=_nAddressesFormat;
@property(retain, nonatomic) NSString *andNMoreNoEllipsisFormat; // @synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat;
@property(retain, nonatomic) NSString *andNMoreFormat; // @synthesize andNMoreFormat=_andNMoreFormat;
- (id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(id /* block */)arg2 stringForAddressAtIndex:(id /* block */)arg3 lengthValidationBlock:(id /* block */)arg4;
- (void)getCommaSeparatedAddressList:(out id *)arg1 andListSuffix:(out id *)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(id /* block */)arg4 stringForAddressAtIndex:(id /* block */)arg5 lengthValidationBlock:(id /* block */)arg6;

@end

