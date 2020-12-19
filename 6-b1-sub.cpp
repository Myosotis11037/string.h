#include <cstdio>  

int tj_strlen(const char* str)
{
	int cnt = 0;
	while (1) {
		if (str != NULL && *str != '\0') {
			cnt++;
			str++;
		}
		else {
			break;
		}
	}
	return cnt;
}

char* tj_strcat(char* s1, const char* s2)
{
	int cnt = 0;
	while (1) {
		if (s1 != NULL && *(s1 + cnt) != '\0') {
			cnt++;
		}
		else {
			if (s1 == NULL) {
				return NULL;
			}
			break;
		}
	}
	int cnt2 = 0;
	while (1) {
		if (s2 != NULL) {
			*(s1 + cnt) = *(s2 + cnt2);
			cnt++;
			cnt2++;
			if (*(s2 + cnt2) == '\0') break;
		}
		else break;
	}
	*(s1 + cnt) = '\0';
	return s1;
}


char* tj_strncat(char* s1, const char* s2, const int len)
{
	if (s2 == NULL && s1 != NULL) {
		return s1;
	}
	else if (s1 == NULL) {
		return NULL;
	}
	int cnt1 = 0;
	while (1) {
		if (s1 != NULL && *(s1 + cnt1) != '\0') {
			cnt1++;
		}
		else {
			if (s1 == NULL) {
				return NULL;
			}
			break;
		}
	}
	int cnt2 = 0;
	while (1) {
		if (s2 != NULL && *(s2 + cnt2) != '\0') {
			cnt2++;
		}
		else {
			if (s1 == NULL) {
				return NULL;
			}
			break;
		}
	}
	if (len >= cnt2) {
		for (int i = 0; i < cnt2; i++) {
			*(s1 + cnt1 + i) = *(s2 + i);
		}
		return s1;
	}
	else {
		for (int i = 0; i < len; i++) {
			*(s1 + cnt1 + i) = *(s2 + i);
		}
		return s1;
	}
}


char* tj_strcpy(char* s1, const char* s2)
{
	if (s1 == NULL) {
		return NULL;
	}
	else {
		if (s2 == NULL) {
			s1[0] = '\0';
			return s1;
		}
		else {
			int cnt1 = 0;
			while (1) {
				if (s1 != NULL && *(s1 + cnt1) != '\0') {
					cnt1++;
				}
				else {
					if (s1 == NULL) {
						return NULL;
					}
					break;
				}
			}
			int cnt2 = 0;
			while (1) {
				if (s2 != NULL && *(s2 + cnt2) != '\0') {
					cnt2++;
				}
				else {
					if (s1 == NULL) {
						return NULL;
					}
					break;
				}
			}
			if (cnt1 >= cnt2) {
				for (int i = 0; i < cnt1; i++) {
					if (i < cnt2) {
						*(s1 + i) = *(s2 + i);
					}
					else {
						*(s1 + i) = '\0';
						break;
					}
				}
			}
			else {
				for (int i = 0; i < cnt2; i++) {
					*(s1 + i) = *(s2 + i);
				}
				*(s1 + cnt2) = '\0';
			}
		}
	}
	return s1;
	
}


char* tj_strncpy(char* s1, const char* s2, const int len)
{
	int cnt = 0;
	while (1) {
		if (s2 != NULL && *(s2 + cnt) != '\0') {
			cnt++;
		}
		else {
			if (s2 == NULL) {
				return s1;
			}
			break;
		}
	}
	if (len > cnt) {
		for (int i = 0; i < cnt; i++) {
			if (s1 != NULL) {
				if (*s2 != '\0') {
					*(s1 + i) = *(s2 + i);
				}
				else {
					s2++;
				}
			}
			else {
				return NULL;
			}
		}
	}
	else {
		for (int i = 0; i < len; i++) {
			if (s1 != NULL) {
				*(s1 + i) = *(s2 + i);
			}
			else {
				return NULL;
			}
		}
	}
	return s1;
}


int tj_strcmp(const char* s1, const char* s2)
{
	if (s1 == NULL && s2 != NULL) {
		return -1;
	}
	else if (s1 != NULL && s2 == NULL) {
		return 1;
	}
	else if (s1 == NULL && s2 == NULL) {
		return 0;
	}
	else {
		int cnt1 = 0;
		while (1) {
			if (s1 != NULL && *(s1 + cnt1) != '\0') {
				cnt1++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt2 = 0;
		while (1) {
			if (s2 != NULL && *(s2 + cnt2) != '\0') {
				cnt2++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt = 0;
		if (cnt1 != cnt2) {
			while (1) {
				if (*(s1 + cnt) == *(s2 + cnt)) {
					cnt++;
					continue;
				}
				else {
					int result = *(s1 + cnt) - *(s2 + cnt);
					return result;
				}
			}
		}
		else {
			while (1) {
				if (*(s1 + cnt) == *(s2 + cnt) && *(s1 + cnt) != '\0') {
					cnt++;
					continue;
				}
				else if (*(s1 + cnt) == '\0') {
					return 0;
				}
				else {
					int result = *(s1 + cnt) - *(s2 + cnt);
					return result;
				}
			}
		}
	}
}


int tj_strcasecmp(const char* s1, const char* s2)
{
	char x = 'a';
	char y = 'b';
	char* s11 = &x;
	char* s22 = &y;
	if (s1 == NULL && s2 != NULL) {
		return -1;
	}
	else if (s1 != NULL && s2 == NULL) {
		return 1;
	}
	else if (s1 == NULL && s2 == NULL) {
		return 0;
	}
	else {
		int cnt1 = 0;
		while (1) {
			if (s1 != NULL && *(s1 + cnt1) != '\0') {
				cnt1++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt2 = 0;
		while (1) {
			if (s2 != NULL && *(s2 + cnt2) != '\0') {
				cnt2++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt = 0;
		if (cnt1 != cnt2) {
			while (1) {
				if (*(s1 + cnt) >= 65 && *(s1 + cnt) <= 90) {
					*s11 = *(s1 + cnt) + 32;
				}
				else {
					*s11 = *(s1 + cnt);
				}
				if (*(s2 + cnt) >= 65 && *(s2 + cnt) <= 90) {
					*s22 = *(s2 + cnt) + 32;
				}
				else {
					*s22 = *(s2 + cnt);
				}
				if (*s11 == *s22) {
					cnt++;
					continue;
				}
				else {
					int result = *s11 - *s22;
					return result;
				}
			}
		}
		else {
			while (1) {
				if (*(s1 + cnt) >= 65 && *(s1 + cnt) <= 90) {
					*s11 = *(s1 + cnt) + 32;
				}
				else {
					*s11 = *(s1 + cnt);
				}
				if (*(s2 + cnt) >= 65 && *(s2 + cnt) <= 90) {
					*s22 = *(s2 + cnt) + 32;
				}
				else {
					*s22 = *(s2 + cnt);
				}
				if (*s11 == *s22 && *(s1 + cnt) != '\0') {
					cnt++;
					continue;
				}
				else if (*(s1 + cnt) == '\0') {
					return 0;
				}
				else {
					int result = *s11 - *s22;
					return result;
				}
			}
		}
	}

}


int tj_strncmp(const char* s1, const char* s2, const int len)
{
	if (s1 == NULL && s2 != NULL) {
		return -1;
	}
	else if (s1 != NULL && s2 == NULL) {
		return 1;
	}
	else if (s1 == NULL && s2 == NULL) {
		return 0;
	}
	else {
		int cnt1 = 0;
		while (1) {
			if (s1 != NULL && *(s1 + cnt1) != '\0') {
				cnt1++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt2 = 0;
		while (1) {
			if (s2 != NULL && *(s2 + cnt2) != '\0') {
				cnt2++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cntmin = cnt1 < cnt2 ? cnt1 : cnt2;
		if (len <= cntmin) {
			for (int i = 0; i < len; i++) {
				if (*(s1 + i) != *(s2 + i)) {
					return(*(s1 + i) - *(s2 + i));
				}
				else continue;
			}
			return 0;
		}
		else {
			for (int i = 0; i < cntmin + 1; i++) {
				if (cnt1 == cnt2) {
					if (*(s1 + i) != *(s2 + i)) {
						return(*(s1 + i) - *(s2 + i));
					}
					else continue;
				}
				else {
					if (*(s1 + i) == '\0' || *(s2 + i) == '\0') {
						return(*(s1 + i) - *(s2 + i));
					}
					else continue;
				}
			}
			return 0;
		}
	}
}


int tj_strcasencmp(const char* s1, const char* s2, const int len)
{
	char x = 'a';
	char y = 'b';
	char* s11 = &x;
	char* s22 = &y;
	if (s1 == NULL && s2 != NULL) {
		return -1;
	}
	else if (s1 != NULL && s2 == NULL) {
		return 1;
	}
	else if (s1 == NULL && s2 == NULL) {
		return 0;
	}
	else {
		int cnt1 = 0;
		while (1) {
			if (s1 != NULL && *(s1 + cnt1) != '\0') {
				cnt1++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cnt2 = 0;
		while (1) {
			if (s2 != NULL && *(s2 + cnt2) != '\0') {
				cnt2++;
			}
			else {
				if (s1 == NULL) {
					return NULL;
				}
				break;
			}
		}
		int cntmin = cnt1 < cnt2 ? cnt1 : cnt2;
		if (len <= cntmin) {
			for (int i = 0; i < len; i++) {
				if (*(s1 + i) != *(s2 + i)) {
					if (*(s1 + i) >= 65 && *(s1 + i) <= 90) {
						*s11 = *(s1 + i) + 32;
					}
					else *s11 = *(s1 + i);
					if (*(s2 + i) >= 65 && *(s2 + i) <= 90) {
						*s22 = *(s2 + i) + 32;
					}
					else *s22 = *(s2 + i);
					if (*s11 != *s22) {
						return(*s11 - *s22);
					}

				}
				else continue;
			}
			return 0;
		}
		else {
			for (int i = 0; i < cntmin + 1; i++) {
				if (cnt1 == cnt2) {
					if (*(s1 + i) != *(s2 + i)) {
						if (*(s1 + i) >= 65 && *(s1 + i) <= 90) {
							*s11 = *(s1 + i) + 32;
						}
						else *s11 = *(s1 + i);
						if (*(s2 + i) >= 65 && *(s2 + i) <= 90) {
							*s22 = *(s2 + i) + 32;
						}
						else *s22 = *(s2 + i);

						if (*s11 != *s22) {
							return(*s11 - *s22);
						}
					}
					else continue;
				}
				else {
					if (*(s1 + i) == '\0' || *(s2 + i) == '\0') {
						if (*(s1 + i) >= 65 && *(s1 + i) <= 90) {
							*s11 = *(s1 + i) + 32;
						}
						else *s11 = *(s1 + i);
						if (*(s2 + i) >= 65 && *(s2 + i) <= 90) {
							*s22 = *(s2 + i) + 32;
						}
						else *s22 = *(s2 + i);
						if (*s11 != *s22) {
							return(*s11 - *s22);
						}
					}
					else continue;
				}
			}
			return 0;
		}
	}
	return 0;
}


char* tj_strupr(char* str)
{
	if (str == NULL) {
		return NULL;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}
		for (int i = 0; i < cnt; i++) {
			if (*(str + i) >= 97 && *(str + i) <= 122) {
				*(str + i) -= 32;
			}
			else continue;
		}
	}
	return str;
}


char* tj_strlwr(char* str)
{
	if (str == NULL) {
		return NULL;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}
		for (int i = 0; i < cnt; i++) {
			if (*(str + i) >= 65 && *(str + i) <= 90) {
				*(str + i) += 32;
			}
			else continue;
		}
	}
	return str;
}


int tj_strchr(const char* str, const char ch)
{
	bool flag = 0;
	int local;
	if (str == NULL) {
		return NULL;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}

		for (int i = 0; i < cnt; i++) {
			if (*(str + i) != ch) continue;
			else {
				flag = 1;
				local = i + 1;
				break;
			}
		}
	}
	if (flag) {
		return local;
	}
	else return 0;
}


int tj_strstr(const char* str, const char* substr)
{
	if (str == NULL || substr == NULL) {
		return 0;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}
		int subcnt = 0;
		while (1) {
			if (substr != NULL && *(substr + subcnt) != '\0') {
				subcnt++;
			}
			else {
				if (substr == NULL) {
					return NULL;
				}
				break;
			}
		}
		for (int i = 0; i < cnt - subcnt + 1; i++) {
			for (int j = 0; j < subcnt; j++) {
				if (*(str + j + i) != *(substr + j)) {
					break;
				}
				else {
					if (j == subcnt - 1) {
						return(i + 1);
					}
				}
			}
		}
	}
	return 0;
}


int tj_strrchr(const char* str, const char ch)
{
	bool flag = 0;
	int local;
	if (str == NULL) {
		return NULL;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}

		for (int i = cnt - 1; i >= 0; i--) {
			if (*(str + i) != ch) continue;
			else {
				flag = 1;
				local = i + 1;
				break;
			}
		}
	}
	if (flag) {
		return local;
	}
	else return 0;
}


int tj_strrstr(const char* str, const char* substr)
{
	if (str == NULL || substr == NULL) {
		return 0;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}
		int subcnt = 0;
		while (1) {
			if (substr != NULL && *(substr + subcnt) != '\0') {
				subcnt++;
			}
			else {
				if (substr == NULL) {
					return NULL;
				}
				break;
			}
		}
		for (int i = cnt - subcnt; i >= 0; i--) {
			for (int j = 0; j < subcnt; j++) {
				if (*(str + j + i) != *(substr + j)) {
					break;
				}
				else {
					if (j == subcnt - 1) {
						return(i + 1);
					}
				}
			}
		}
	}
	return 0;
}


char* tj_strrev(char* str)
{
	if (str == NULL) {
		return NULL;
	}
	else {
		int cnt = 0;
		while (1) {
			if (str != NULL && *(str + cnt) != '\0') {
				cnt++;
			}
			else {
				if (str == NULL) {
					return NULL;
				}
				break;
			}
		}
		if (cnt % 2 == 0) {
			for (int i = 0; i < cnt / 2; i++) {
				char temp1 = *(str + i);
				char temp2 = *(str + cnt - i - 1);
				*(str + i) = temp2;
				*(str + cnt - i - 1) = temp1;
			}
		}
		else {
			for (int i = 0; i < (cnt - 1) / 2; i++) {
				char temp1 = *(str + i);
				char temp2 = *(str + cnt - i - 1);
				*(str + i) = temp2;
				*(str + cnt - i - 1) = temp1;
			}
		}
	}
	return str;
}
