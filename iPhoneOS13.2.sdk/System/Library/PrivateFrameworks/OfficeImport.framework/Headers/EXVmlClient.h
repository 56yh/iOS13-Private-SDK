//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/OAVReadClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVReadClient>
{
}

+ (int)vmlSupportLevel;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (id)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)readComment:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readAnchor:(struct _xmlNode *)arg1 to:(id)arg2;

@end

