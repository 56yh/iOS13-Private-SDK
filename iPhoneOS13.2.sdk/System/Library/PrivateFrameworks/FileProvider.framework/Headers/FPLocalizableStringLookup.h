//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface FPLocalizableStringLookup : NSObject
{
    NSBundle *_bundle;
    id _cfBundle;
    NSString *_tableName;
}

@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) id cfBundle; // @synthesize cfBundle=_cfBundle;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)localizedStringForKey:(id)arg1;

@end

