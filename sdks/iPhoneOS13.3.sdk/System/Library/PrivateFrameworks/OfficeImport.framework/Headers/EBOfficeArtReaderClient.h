//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OABReaderClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;
+ (BOOL)tablesAreAllowed;
+ (BOOL)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readEshClientAnchor:(const struct XlEshClientAnchor )arg1 targetClientData:(id)arg2 state:(id)arg3;
+ (void)setAutoInsetForShape:(struct EshShape )arg1;

@end

