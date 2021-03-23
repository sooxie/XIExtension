//
//  NSString+Common.h
//  ZJFinancee
//
//  Created by showXxie on 2017/12/6.
//  Copyright © 2017年 sooxie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Common)
- (NSString *)md5Str;
- (CGSize)getSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;
- (BOOL)isEmpty;

+ (NSString *)urlStrWthiString:(NSString *)urlString andparams:(NSDictionary *)params;
- (NSString *)URLEncodedString;
-(NSString *)URLDecodedString;
- (NSString *)trimWhitespace;

- (NSString *)base64Decoding;
- (NSString *)base64Encoding;
@end
