//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/TCDumpType.h>

__attribute__((visibility("hidden")))
@interface TCDumpBlob : TCDumpType
{
    unsigned long long mSize;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSize_:(unsigned long long)arg1;

@end

